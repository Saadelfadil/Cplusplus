/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 20:34:25 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 21:09:53 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADERR_H
# define MY_HEADERR_H
# include <iostream>
# define DEBUG 1
# define INFO 2
# define WARNING 3
# define ERROR 4
# define  INVALID 5

class Karen {
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public :
        ~Karen();
        Karen();
        void complain(std::string level);
};

typedef void (Karen::*Mykaren) (void);

#endif