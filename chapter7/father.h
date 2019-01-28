//
// Created by janko.zhang on 2019-01-21.
//

#ifndef PRIMER_FATHER_H
#define PRIMER_FATHER_H

class father {
private:
    int x;
    int y;
public:
    father(int &a, int& b):x(a),y(b){};
    void say(){
        std::cout << "x:"<< this->x << "Y:" << this->y << std::endl;
    };
    ~father() = default;
};


#endif //PRIMER_FATHER_H
