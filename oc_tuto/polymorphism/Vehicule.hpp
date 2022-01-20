/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vehicule.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:45:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 15:47:23 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEHICULE_CLASS_HPP
#define VEHICULE_CLASS_HPP

#include <iostream>

class Vehicule
{
    public:
	Vehicule(int prix);
    virtual void affiche() const;  //Affiche une description du Vehicule
	virtual ~Vehicule();
	virtual int	nbRoues() const = 0;

    protected:
    int m_prix;  //Chaque véhicule a un prix
};

class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
    public:
	Voiture(int prix, int portes);
    virtual void affiche() const;
	virtual ~Voiture();
	virtual int	nbRoues() const;


    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
	Moto(int prix, double vitesseMax);
    virtual void affiche() const;
	virtual ~Moto();
	virtual int	nbRoues() const;

 
    private:
    double m_vitesse;  //La vitesse maximale de la moto
};

#endif