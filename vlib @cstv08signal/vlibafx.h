//vlibafx.h copyright @ WarFalls

#ifndef VLIBAFX_H
#define VLIBAFX_H

#include <string>

void Sysprintf(const char * cmd, ...);
void SysSprintf(char * buff, const char * cmd, int id);

typedef bool qboolean;
typedef std::string CString;
typedef::uint8_t CI8;

#define VLIB_BYTES 0000x8000

namespace{};

namespace vlib{

    class vlib_t;

};





#endif