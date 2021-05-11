
#ifndef _IEXAM_
#define _IEXAM_

class IExam
{
public:
    virtual ~IExam() {};

    virtual void examine() = 0;

};

#endif // _IEXAM_