#ifndef Document_hpp
#define Document_hpp


class Document
{
public:
    virtual Document* clone() const = 0;
};


#endif
