WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef FILEDATASINK_H
#define FILEDATASINK_H

#include "DataSink.h"
#include <fstream>

class CFileDataSink : public CDataSink{
    private:
        std::ofstream DFile;
    public:
        CFileDataSink(const std::string &filename);

        bool Put(const char &ch) noexcept override;
        bool Write(const std::vector<char> &buf) noexcept override;
};

#endif
