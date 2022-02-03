/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classTemplate.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:47:27 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/03 21:00:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Si definition en dehors de la classe
// template<typename T>
// T Rectangle<T>::hauteur() const
// {
//    return m_haut-m_bas;
// }

template <typename T>
class Rectangle {

	public :

		Rectangle(T gauche, T droite, T haut, T bas) : 
			_gauche(gauche),
			_droite(droite),
			_haut(haut),
			_bas(bas) {}
	
		T getHauteur() const {
			return _haut - _bas;
		}

		bool	estContenu(T x, T y) const {
			return (x >= _gauche) && (x <= _droite) && (y >= _bas) && (y <= _haut);
		}

	private :
		T	_gauche;
		T	_droite;
		T	_haut;
		T	_bas;
};

int main() {
	
	Rectangle<double> myRectangle(1.0, 4.5, 3.1, 5.2);

	std::cout << myRectangle.getHauteur() << std::endl;

	return 0;
}