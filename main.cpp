#include <iostream>

typedef unsigned short int SHORT;

struct Cube
{
    SHORT w,l,h;
public:
    Cube()
    {
        w,l,h = 10;
        SHORT* pW = &w;
        SHORT* pL = &l;
        SHORT* pH = &h;
    }

    int getVolume(Cube input) {
        SHORT derefWidth = input.w;
        SHORT derefLength = *pL;
        SHORT derefHeight = *pH;
        int volume = derefHeight * derefLength * derefWidth;
        return volume;
    }
};

int main()
{
    Cube firstCube;
    std::cout << firstCube.getVolume() << std::endl;
    printf("hello world\n");
    return 0;
}







