/* pb_arduino_encode.h -- helper functions to encode to an Arduino Print object
 *
 * 2013 Alejandro Morell Garcia <alejandro.morell@gmail.com>
 */

#ifndef PB_ARDUINO_ENCODE_H_
#define PB_ARDUINO_ENCODE_H_

#include <Print.h>
#include "pb_encode.h"

void pb_ostream_from_stream(Print &stream, pb_ostream_t &ostream);

#endif // PB_ARDUINO_ENCODE_H_
