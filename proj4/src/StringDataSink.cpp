WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "StringDataSink.h"

const std::string &CStringDataSink::String() const{
    return DString;
}

bool CStringDataSink::Put(const char &ch) noexcept{
    DString += std::string(1,ch);
    return true;
}

bool CStringDataSink::Write(const std::vector<char> &buf) noexcept{
    DString += std::string(buf.data(),buf.size());
    return true;
}
