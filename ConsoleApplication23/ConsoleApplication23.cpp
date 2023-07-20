// ConsoleApplication23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;


class Vector3D; 

class Point3D
{
private:
    double m_x, m_y, m_z;

public:
    Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {
    }

    void print()
    {
        cout << "Точка(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }

    void moveByVector(const Vector3D& v); 
};

class Vector3D
{
private:
    double m_x, m_y, m_z;

public:
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {
    }

    void print()
    {
        cout << "Вектор(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }

    
    friend class Point3D;
};

void Point3D::moveByVector(const Vector3D& v)
{
    
    m_x += v.m_x;
    m_y += v.m_y;
    m_z += v.m_z;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point3D p(3.0, 4.0, 5.0);
    Vector3D v(3.0, 3.0, -2.0);
    p.print();
    p.moveByVector(v); 
    v.print();
    p.print();
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
