/* pb_arduino_decode.h -- helper functions to decode from an Arduino Stream
 *
 * 2013 Alejandro Morell Garcia <alejandro.morell@gmail.com>
 */

#ifndef PB_ARDUINO_DECODE_H_
#define PB_ARDUINO_DECODE_H_

#include <Stream.h>
#include "pb_decode.h"

void pb_istream_from_stream(Stream &stream, pb_istream_t &istream);

#endif // PB_ARDUINO_DECODE_H_
