#ifndef __Lab__phone__
#define __Lab__phone__

class Phone {
public:
    Phone();
    Phone(const Phone* _phone);
    Phone(const int _phoneNumber, const char _nameOfOwners[], const int _serialNumber, const bool _isBroken);
    ~Phone();

    void input();
    void output();

    int phoneNumber;
    char nameOfOwner[60];
protected:
    int serialNumber;
private:
    bool isBroken;
};

#endif
