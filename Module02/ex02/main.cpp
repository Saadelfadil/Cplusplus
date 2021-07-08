/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/08 14:06:09 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



class  Test{
        private:
                int a;
        public:
        Test(void){}
        Test(int _a): a(_a) {}
        // Test(Test const& ob)
        // {
        //         (void)ob;
        //         std::cout << "hello\n";
        // }
        Test operator*(Test const& ob)
        {
                return  Test(this->a * ob.a);
        }
};
int main( void )
{
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
        
        // Fixed a1(5);
        // Fixed a2(5);
        // Fixed a3(7);
        // Fixed a4(7);
        
        // a1++;
        // std::cout << a1++ << "\n";
        // std::cout << ++a2 << "\n";
        // std::cout << a3-- << "\n";
        // std::cout << --a4 << "\n";
        return 0;
}