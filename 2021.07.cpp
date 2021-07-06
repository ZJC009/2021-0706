#include<stdio.h>

/*
------ 1 ------
*/
//struct Vector2
//{
//private:
//public:
//    int x;
//    int y;
//};
//struct Vector2 v;
//int main()
//{
//    v.x = 2;
//    v.y = 2;
//    printf("struct v: %d, %d\n", v.x, v.y);
//
//    return 0;
//}

/*
------ 2 ------
*/
//struct Vector2
//{
//public:
//    void setX(int x1)
//    {
//        x = x1;
//    }
//    void setY(int y1)
//    {
//        y = y1;
//    }
//    int getX()
//    {
//        return x;
//    }
//    int getY()
//    {
//        return y;
//    }
//private:
//    int x;
//    int y;
//};
//struct Vector2 v;
//int main()
//{
//    v.setX(3);
//    v.setY(3);
    //printf("struct v: %d, %d\n", v.getX(), v.getY());
//        return 0;
//}

/*
------ 3 ------
*/
struct Vector2
{
public:
    void setX(int x1)
    {
        x = x1;
    }
    void setY(int y1)
    {
        y = y1;
    }
    void setZ(int z1)
    {
        y = z1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
private:
    int x;
    int y;
    int z;
};
struct Vector2 v;
int main()
{
    v.setX(3);
    v.setY(3);
    v.setZ(3);
    printf("struct v: %d, %d\n", v.getX(), v.getY(), v.getZ());
    return 0;
}

