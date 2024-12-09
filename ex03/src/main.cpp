/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:07:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/09 12:06:04 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon club = Weapon("crude spiked club");

    // HumanAのテスト
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("bat");
    bob.attack();

    // HumanBのテスト
    HumanB jim("Jim");
    jim.attack();                 // 武器がない状態での攻撃
    jim.setWeapon(club);          // 武器を設定
    jim.attack();                 // 武器を持った状態での攻撃
    club.setType("some other type of club");
    jim.attack();                 // 武器が変更された状態での攻撃

    return 0;
}


//#include "Weapon.hpp"
//#include "HumanA.hpp"
//#include "HumanB.hpp"
//
//int main(void)
//{
//	//Weapon club=Weapon("crude spiked club");
//
//	//HumanA bob("bob",club);
//
//	//bob.attack();
//
//	//club.setType("bat");
//
//	//bob.attack();
//
//	//bob.attack();
//	
//	Weapon club=Weapon("crude spiked club");
//	HumanB jim("jim");
//
//	jim.attack();
//	jim.setWeapon(club);
//	jim.attack();
//	club.setType("some other type of club");
//	jim.attack();
//
//
//	return 0;
//}
