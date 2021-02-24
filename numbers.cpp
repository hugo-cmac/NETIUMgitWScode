#include <iostream>
#include <cassert>
 
class Numbers
{
private:
    double m_first;
    double m_second;
 
public:
    Numbers(double first = 0, double second = 0) 
    {
         m_first = first;
         m_second = second;
    }
 
    double getFirst() { return m_first; }
    double getSecond() { return m_second; }
    double getSum() { return m_first + m_second; }
    //double getSubtractionFirstBySecond() { return m_first - m_second; }
    //double getSubtractionSecondByFirst() { return m_second - m_first; }
    //double getMultiplication() { return m_first * m_second; }
    /*double getDivisionFirstBySecond() 
    {
        assert(m_second != 0); 
        return static_cast<double>(m_first / m_second); 
    }*/
    /*double getDivisionSecondByFirst() 
    {
        assert(m_first != 0); 
        return static_cast<double>(m_second / m_first); 
    }*/
};
 
int main()
{
    Numbers num {2.4, 5.6}; 
    std::cout << num.getFirst() << "+" << num.getSecond() << " = " << num.getSum() << '\n';
    //std::cout << num.getFirst() << "-" << num.getSecond() << " = " << num.getSubtractionFirstBySecond()  << '\n';
    //std::cout << num.getSecond() << "-" << num.getFirst() << " = " << num.getSubtractionSecondByFirst()  << '\n';
    //std::cout << num.getFirst() << "*" << num.getSecond() << " = " << num.getMultiplication() << '\n';
    //std::cout << num.getFirst() << "/" << num.getSecond() << " = " << num.getDivisionFirstBySecond()  << '\n';
    //std::cout << num.getSecond() << "/" << num.getFirst() << " = " << num.getDivisionSecondByFirst()  << '\n';
 
    return 0;
}
