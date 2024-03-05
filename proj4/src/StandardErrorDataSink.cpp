WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "StandardErrorDataSink.h"
#include <iostream>

bool CStandardErrorDataSink::Put(const char &ch) noexcept{
    std::cerr.put(ch);
    return std::cerr.good();
}

bool CStandardErrorDataSink::Write(const std::vector<char> &buf) noexcept{
    std::cerr.write(buf.data(),buf.size());
    return std::cerr.good();
}