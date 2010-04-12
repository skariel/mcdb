/* License: GPLv3 */

#include "mcdb_uint32.h"

uint32_t mcdb_uint32_unpack(const char s[4])
{
  const unsigned char * const restrict n = (const unsigned char *)s;
  return mcdb_uint32_unpack_macro(n);
}

uint32_t mcdb_uint32_unpack_big(const char s[4])
{
  const unsigned char * const restrict n = (const unsigned char *)s;
  return mcdb_uint32_unpack_big_macro(n);
}

void mcdb_uint32_pack(char s[4], const uint32_t u)
{
  mcdb_uint32_pack_macro(s,u);
}

void mcdb_uint32_pack_big(char s[4], const uint32_t u)
{
  mcdb_uint32_pack_big_macro(s,u);
}

