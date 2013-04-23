/* pb_arduino_encode.h -- helper functions to encode to an Arduino Print object
 *
 * 2013 Alejandro Morell Garcia <alejandro.morell@gmail.com>
 */

#include "pb_arduino_encode.h"

bool os_write(pb_ostream_t *stream, const uint8_t *buf, size_t count);

void pb_ostream_from_stream(Print &stream, pb_ostream_t &ostream) {
    ostream.callback = &os_write;
    ostream.state = &stream;
    ostream.max_size = (size_t)-1;
    ostream.bytes_written = 0;
#ifndef PB_NO_ERRMSG
    ostream.errmsg = NULL;
#endif
}

bool os_write(pb_ostream_t *stream, const uint8_t *buf, size_t count) {
    if (stream == NULL || buf == NULL) {
        return false;
    }

    Print *s = static_cast<Print *>(stream->state);
    return (s->write(buf, count) == count);
}
