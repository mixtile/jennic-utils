/*
 * Copyright (C) 2015 Focalcrest, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef UTIL_CRC_H
#define UTIL_CRC_H

unsigned char util_crc8(unsigned char* ucs, unsigned char ucslen, unsigned char crc);
unsigned char util_crc8_by_table(unsigned char* ucs, unsigned char ucslen, unsigned char crc);
int util_debug_buf(char* ptip, unsigned char* pbuf, int len);

#endif // UTIL_CRC_H
