/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 10:22:13 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 10:54:33 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main() {

	std::cout << "Main from subject:" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> ss(mstack);

	std::cout << "---------------------------" << std::endl;
	std::cout << "More tests with MutantStack and comparison with list:" << std::endl;

	MutantStack<int> mutant;
	std::list<int> mutant_list;
	std::cout << "mutant.empty:"<< mutant.empty() << " | stack_list.empty:"<< mutant_list.empty() << std::endl; //Test whether container is empty
	mutant.push(5); //Insert element
	mutant_list.push_back(5); //Insert element
	mutant.push(17);
	mutant_list.push_back(17);
	std::cout << "mutant.top:" << mutant.top() << " | mutant_list.top:" << mutant_list.back() << std::endl; //Access next element
	mutant.pop(); //Remove top element
	mutant_list.pop_back(); //Remove top element
	std::cout << "mutant.size:"<< mutant.size() << " | mutant_list.size:"<< mutant_list.size()<< std::endl; //Return size
	mutant.push(3);
	mutant_list.push_back(3);
	mutant.push(5);
	mutant_list.push_back(5);
	mutant.push(737);
	mutant_list.push_back(737);
	mutant.push(2147483647);
	mutant_list.push_back(2147483647);
	mutant.push(-2147483648);
	mutant_list.push_back(-2147483648);
	mutant.push(-12);
	mutant_list.push_back(-12);
	mutant.push(0);
	mutant_list.push_back(0);
	MutantStack<int>::iterator itm = mutant.begin();
	MutantStack<int>::iterator itme = mutant.end();
	std::list<int>::iterator itl = mutant_list.begin();
	std::list<int>::iterator itle = mutant_list.end();
	++itm;
	--itm;
	++itl;
	--itl;
	while (itm != itme && itl != itle) {
		std::cout << "*it:"<< *itm << " | *itl:"<< *itl << std::endl;
		++itm;
		++itl;
	}
	std::cout << "mutant.size:"<< mutant.size() << " | mutant_list.size:"<< mutant_list.size()<< std::endl; //Return size
	std::cout << "mutant.empty:"<< mutant.empty() << " | stack_list.empty:"<< mutant_list.empty() << std::endl; //Test whether container is empty
	std::list<int> sl(mutant_list);
	std::stack<int> s(mutant);

	return 0;
}
