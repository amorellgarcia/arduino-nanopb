arduino-nanopb
==============

A fork of Nanopb from with Arduino helper funtions.
Based on git version (0.2.1).
All credits go to Petteri Aimonen (http://koti.kapsi.fi/~jpa/nanopb/).

Usage
-----
This project only adds these functions to Nanopb:
- void pb\_istream\_from\_stream(Stream &stream, pb\_istream\_t &istream)
  Fills a pb\_istream\_t structure that uses stream as input stream.
- void pb\_ostream\_from\_stream(Print &stream, pb\_ostream\_t &ostream)
  Fills a pb\_ostream\_t structure that uses stream as output stream.

See README or visit Nanopb website for more documentation.

