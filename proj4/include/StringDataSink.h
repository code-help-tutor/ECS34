WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef STRINGDATASINK_H
#define STRINGDATASINK_H

#include "DataSink.h"
#include <string>

class CStringDataSink : public CDataSink{
    private:
        std::string DString;
    public:
        const std::string &String() const;

        bool Put(const char &ch) noexcept override;
        bool Write(const std::vector<char> &buf) noexcept override;
};

#endif
