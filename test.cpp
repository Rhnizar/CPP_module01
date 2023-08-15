/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:39:32 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/15 10:53:20 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>

// int	main()
// {
// 	// int	*p = new int;
// 	// std::string *str = new std::string;
// 	// *p = 1;
// 	// *str = "hjshg";

// 	// std::cout << *str << std::endl;
	
// 	// std::cout << *p << std::endl;
// 	// delete p;
// 	// delete str;

// 	int	size;
// 	std::cin >> size;
// 	std::string *x = new std::string[size];
// 	for (int i = 0; i < size ; i++)
// 		 std::cin >> x[i];
// 	for (int i = 0; i < size ; i++)
// 		 std::cout << x[i] << std::endl;
	
// 	delete []x;
// 	return 0;
// }


#include <iostream>
#include <string>

int main() {
    std::string sentence = "The quick brown fox jumps over the lazy dog.";
    std::string oldWord = "The";
    std::string newWord = "cat";

    size_t found = sentence.find(oldWord);
    while (found != std::string::npos) {
        sentence.replace(found, oldWord.length(), newWord);
        found = sentence.find(oldWord, found + newWord.length());
    }

    std::cout << sentence << std::endl;

    return 0;
}