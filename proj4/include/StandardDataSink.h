WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef STANDARDDATASINK_H
#define STANDARDDATASINK_H

#include "DataSink.h"

class CStandardDataSink : public CDataSink{
    private:
    public:
        bool Put(const char &ch) noexcept override;
        bool Write(const std::vector<char> &buf) noexcept override;
};

#endif
