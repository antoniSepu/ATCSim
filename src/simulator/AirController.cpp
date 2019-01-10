/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <cmath>

namespace atcsim {

AirController::AirController() {
	// TODO Auto-generated constructor stub
}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
			std::list<Flight*> flights = Airport::getInstance()->getFlights();
			std::list<Flight*>::iterator it;
			const float FranjaTerminal_x = 1800, FranjaTerminal_y = 1500;
			const float ZonaTerminal_x = 3700, ZonaTerminal_y = 3200;


//Circuito sector 1

			Position pos_circuito1_0(6500.0, -13500.0, 2500.0);
			Position pos_circuito1_1(6500.0, -7500.0, 2500.0);
			Position pos_circuito1_2(500.0, -7500.0, 2500.0);
			Position pos_circuito1_3(500.0, -13500.0, 2500.0);
			Position pos_circuito1_4(6500.0, -13500.0, 1450.0);
			Position pos_circuito1_5(6500.0, -7500.0, 1450.0);
			Position pos_circuito1_6(500.0, -7500.0, 1450.0);
			Position pos_circuito1_7(500.0, -13500.0, 1450.0);
			Position pos_circuito1_8(6500.0, -13500.0, 400.0);
			Position pos_circuito1_9(6500.0, -7500.0, 400.0);
			Position pos_circuito1_10(500.0, -7500.0, 400.0);
			Position pos_circuito1_11(500.0, -13500.0, 400.0);;
			Position pos_circuito1_resetS(3000.0, -16500.0, 1450.0);

			Position pos_aterrizaje1_0(3500.0, -3000.0, 700.0);
			Position pos_aterrizaje1_1(1500.0, -400.0, 300.0);
			Position pos_aterrizaje1_2(300.0, 0.0, 40.0);
			Position pos_aterrizaje1_3(200.0, 0.0, 25.0);
			Position pos_aterrizaje1_4(-750.0, 0.0, 25.0);

			Route rc1_0, rc1_1, rc1_2, rc1_3, rc1_4, rc1_5, rc1_6, rc1_7, rc1_8, rc1_9,
			rc1_10, rc1_11, rc1_re;
			rc1_0.pos = pos_circuito1_0;
			rc1_0.speed = 150.0;
			rc1_1.pos = pos_circuito1_1;
			rc1_1.speed = 150.0;
			rc1_2.pos = pos_circuito1_2;
			rc1_2.speed = 150.0;
			rc1_3.pos = pos_circuito1_3;
			rc1_3.speed = 150.0;
			rc1_4.pos= pos_circuito1_4;
			rc1_4.speed = 150.0;
			rc1_5.pos = pos_circuito1_5;
			rc1_5.speed = 150.0;
			rc1_6.pos = pos_circuito1_6;
			rc1_6.speed = 150.0;
			rc1_7.pos = pos_circuito1_7;
			rc1_7.speed = 150.0;
			rc1_8.pos = pos_circuito1_8;
			rc1_8.speed = 150.0;
			rc1_9.pos= pos_circuito1_9;
			rc1_9.speed = 150.0;
			rc1_10.pos = pos_circuito1_10;
			rc1_10.speed = 150.0;
			rc1_11.pos = pos_circuito1_11;
			rc1_11.speed = 150.0;
			rc1_re.pos=pos_circuito1_resetS;
			rc1_re.speed=150;

			Route ra1_0, ra1_1, ra1_2, ra1_3, ra1_4;
			ra1_0.pos = pos_aterrizaje1_0;
			ra1_0.speed = 255.0;
			ra1_1.pos = pos_aterrizaje1_1;
			ra1_1.speed = 180.0;
			ra1_2.pos = pos_aterrizaje1_2;
			ra1_2.speed = 90.0;
			ra1_3.pos = pos_aterrizaje1_3;
			ra1_3.speed = 19.0;
			ra1_4.pos= pos_aterrizaje1_4;
			ra1_4.speed = 17.0;

//Circuito sector 2

			Position pos_circuito2_0(13500.0, -7500.0, 2500.0);
			Position pos_circuito2_1(13500.0, -1500.0, 2500.0);
			Position pos_circuito2_2(7500.0, -1500.0, 2500.0);
			Position pos_circuito2_3(7500.0, -7500.0, 2500.0);
			Position pos_circuito2_4(13500.0, -7500.0, 1450.0);
			Position pos_circuito2_5(13500.0, -1500.0, 1450.0);
			Position pos_circuito2_6(7500.0, -1500.0, 1450.0);
			Position pos_circuito2_7(7500.0, -7500.0, 1450.0);
			Position pos_circuito2_8(13500.0, -7500.0, 400.0);
			Position pos_circuito2_9(13500.0, -1500.0, 400.0);
			Position pos_circuito2_10(7500.0, -1500.0, 400.0);
			Position pos_circuito2_11(7500.0, -7500.0, 400.0);
			Position pos_circuito2_resetS(10500.0, -10500.0, 1450.0);

			Position pos_aterrizaje2_0(3500.0, -1000.0, 700.0);
			Position pos_aterrizaje2_1(1500.0, -200.0, 300.0);
			Position pos_aterrizaje2_2(300.0, 0.0, 40.0);
			Position pos_aterrizaje2_3(200.0, 0.0, 25.0);
			Position pos_aterrizaje2_4(-750.0, 0.0, 25.0);

			Route rc2_0, rc2_1, rc2_2, rc2_3, rc2_4, rc2_5, rc2_6, rc2_7, rc2_8, rc2_9,
			rc2_10, rc2_11, rc2_re;
			rc2_0.pos = pos_circuito2_0;
			rc2_0.speed = 150.0;
			rc2_1.pos = pos_circuito2_1;
			rc2_1.speed = 150.0;
			rc2_2.pos = pos_circuito2_2;
			rc2_2.speed = 150.0;
			rc2_3.pos = pos_circuito2_3;
			rc2_3.speed = 150.0;
			rc2_4.pos= pos_circuito2_4;
			rc2_4.speed = 150.0;
			rc2_5.pos = pos_circuito2_5;
			rc2_5.speed = 150.0;
			rc2_6.pos = pos_circuito2_6;
			rc2_6.speed = 150.0;
			rc2_7.pos = pos_circuito2_7;
			rc2_7.speed = 150.0;
			rc2_8.pos = pos_circuito2_8;
			rc2_8.speed = 150.0;
			rc2_9.pos= pos_circuito2_9;
			rc2_9.speed = 150.0;
			rc2_10.pos = pos_circuito2_10;
			rc2_10.speed = 150.0;
			rc2_11.pos = pos_circuito2_11;
			rc2_11.speed = 150.0;
			rc2_re.pos=pos_circuito2_resetS;
			rc2_re.speed=150.0;

			Route ra2_0, ra2_1, ra2_2, ra2_3, ra2_4;
			ra2_0.pos = pos_aterrizaje2_0;
			ra2_0.speed = 255.0;
			ra2_1.pos = pos_aterrizaje2_1;
			ra2_1.speed = 180.0;
			ra2_2.pos = pos_aterrizaje2_2;
			ra2_2.speed = 90.0;
			ra2_3.pos = pos_aterrizaje2_3;
			ra2_3.speed = 19.0;
			ra2_4.pos= pos_aterrizaje2_4;
			ra2_4.speed = 17.0;

//Circuito sector 3

			Position pos_circuito3_0(13500.0, 7500.0, 2500.0);
			Position pos_circuito3_1(13500.0, 1500.0, 2500.0);
			Position pos_circuito3_2(7500.0, 1500.0, 2500.0);
			Position pos_circuito3_3(7500.0, 7500.0, 2500.0);
			Position pos_circuito3_4(13500.0, 7500.0, 1450.0);
			Position pos_circuito3_5(13500.0, 1500.0, 1450.0);
			Position pos_circuito3_6(7500.0, 1500.0, 1450.0);
			Position pos_circuito3_7(7500.0, 7500.0, 1450.0);
			Position pos_circuito3_8(13500.0, 7500.0, 400.0);
			Position pos_circuito3_9(13500.0, 1500.0, 400.0);
			Position pos_circuito3_10(7500.0, 1500.0, 400.0);
			Position pos_circuito3_11(7500.0, 7500.0, 400.0);
			Position pos_circuito3_resetS(10500.0, 10500.0, 1450.0);


			Position pos_aterrizaje3_0(3500.0, 1000.0, 700.0);
			Position pos_aterrizaje3_1(1500.0, 200.0, 300.0);
			Position pos_aterrizaje3_2(300.0, 0.0, 40.0);
			Position pos_aterrizaje3_3(200.0, 0.0, 25.0);
			Position pos_aterrizaje3_4(-750.0, 0.0, 25.0);

			Route rc3_0, rc3_1, rc3_2, rc3_3, rc3_4, rc3_5, rc3_6, rc3_7, rc3_8, rc3_9,
			rc3_10, rc3_11, rc3_re;
			rc3_0.pos = pos_circuito3_0;
			rc3_0.speed = 150.0;
			rc3_1.pos = pos_circuito3_1;
			rc3_1.speed = 150.0;
			rc3_2.pos = pos_circuito3_2;
			rc3_2.speed = 150.0;
			rc3_3.pos = pos_circuito3_3;
			rc3_3.speed = 150.0;
			rc3_4.pos= pos_circuito3_4;
			rc3_4.speed = 150.0;
			rc3_5.pos = pos_circuito3_5;
			rc3_5.speed = 150.0;
			rc3_6.pos = pos_circuito3_6;
			rc3_6.speed = 150.0;
			rc3_7.pos = pos_circuito3_7;
			rc3_7.speed = 150.0;
			rc3_8.pos = pos_circuito3_8;
			rc3_8.speed = 150.0;
			rc3_9.pos= pos_circuito3_9;
			rc3_9.speed = 150.0;
			rc3_10.pos = pos_circuito3_10;
			rc3_10.speed = 150.0;
			rc3_11.pos = pos_circuito3_11;
			rc3_11.speed = 150.0;
			rc3_re.pos=pos_circuito3_resetS;
			rc3_re.speed=150.0;

			Route ra3_0, ra3_1, ra3_2, ra3_3, ra3_4;
			ra3_0.pos = pos_aterrizaje3_0;
			ra3_0.speed = 255.0;
			ra3_1.pos = pos_aterrizaje3_1;
			ra3_1.speed = 180.0;
			ra3_2.pos = pos_aterrizaje3_2;
			ra3_2.speed = 90.0;
			ra3_3.pos = pos_aterrizaje3_3;
			ra3_3.speed = 19.0;
			ra3_4.pos= pos_aterrizaje3_4;
			ra3_4.speed = 17.0;

//Circuito sector 4

			Position pos_circuito4_0(6500.0, 13500.0, 2500.0);
			Position pos_circuito4_1(6500.0, 7500.0, 2500.0);
			Position pos_circuito4_2(500.0, 7500.0, 2500.0);
			Position pos_circuito4_3(500.0, 13500.0, 2500.0);
			Position pos_circuito4_4(6500.0, 13500.0, 1450.0);
			Position pos_circuito4_5(6500.0, 7500.0, 1450.0);
			Position pos_circuito4_6(500.0, 7500.0, 1450.0);
			Position pos_circuito4_7(500.0, 13500.0, 1450.0);
			Position pos_circuito4_8(6500.0, 13500.0, 400.0);
			Position pos_circuito4_9(6500.0, 7500.0, 400.0);
			Position pos_circuito4_10(500.0, 7500.0, 400.0);
			Position pos_circuito4_11(500.0, 13500.0, 400.0);
			Position pos_circuito4_resetS(3000.0, 16500.0, 1450.0);

			Position pos_aterrizaje4_0(3500.0, 3000.0, 700.0);
			Position pos_aterrizaje4_1(1500.0, 400.0, 300.0);
			Position pos_aterrizaje4_2(300.0, 0.0, 40.0);
			Position pos_aterrizaje4_3(200.0, 0.0, 25.0);
			Position pos_aterrizaje4_4(-750.0, 0.0, 25.0);

			Route rc4_0, rc4_1, rc4_2, rc4_3, rc4_4, rc4_5, rc4_6, rc4_7, rc4_8, rc4_9,
			rc4_10, rc4_11, rc4_re;
			rc4_0.pos = pos_circuito4_0;
			rc4_0.speed = 150.0;
			rc4_1.pos = pos_circuito4_1;
			rc4_1.speed = 150.0;
			rc4_2.pos = pos_circuito4_2;
			rc4_2.speed = 150.0;
			rc4_3.pos = pos_circuito4_3;
			rc4_3.speed = 150.0;
			rc4_4.pos= pos_circuito4_4;
			rc4_4.speed = 150.0;
			rc4_5.pos = pos_circuito4_5;
			rc4_5.speed = 150.0;
			rc4_6.pos = pos_circuito4_6;
			rc4_6.speed = 150.0;
			rc4_7.pos = pos_circuito4_7;
			rc4_7.speed = 150.0;
			rc4_8.pos = pos_circuito4_8;
			rc4_8.speed = 150.0;
			rc4_9.pos= pos_circuito4_9;
			rc4_9.speed = 150.0;
			rc4_10.pos = pos_circuito4_10;
			rc4_10.speed = 150.0;
			rc4_11.pos = pos_circuito4_11;
			rc4_11.speed = 150.0;
			rc4_re.pos=pos_circuito4_resetS;
			rc4_re.speed=150;


			Route ra4_0, ra4_1, ra4_2, ra4_3, ra4_4;
			ra4_0.pos = pos_aterrizaje4_0;
			ra4_0.speed = 255.0;
			ra4_1.pos = pos_aterrizaje4_1;
			ra4_1.speed = 180.0;
			ra4_2.pos = pos_aterrizaje4_2;
			ra4_2.speed = 90.0;
			ra4_3.pos = pos_aterrizaje4_3;
			ra4_3.speed = 19.0;
			ra4_4.pos= pos_aterrizaje4_4;
			ra4_4.speed = 17.0;

			it = flights.begin();
			if (!Airport::getInstance()->is_booked_landing() &&
			(*it)->getPosition().get_x() <= ZonaTerminal_x &&
			(*it)->getPosition().get_x() <= ZonaTerminal_y &&
			(*it)->getPosition().get_x() >= -ZonaTerminal_y) {
				//std::cerr << "/ Refrescamos segundo /" << '\n';
				it++;
				(*it)->getRoute()->clear();
			} else if (!Airport::getInstance()->is_booked_landing()){
				//std::cerr << "/ Refrescamos primero /" << '\n';
				(*it)->getRoute()->clear();
			}

			if (!Airport::getInstance()->is_booked_terminal() &&
			(*it)->getPosition().get_x() >= FranjaTerminal_x-1 && (*it)->getPosition().get_x()
			<= FranjaTerminal_x+1 && (*it)->getPosition().get_y() <= FranjaTerminal_y &&
			(*it)->getPosition().get_y() >= -FranjaTerminal_y) {
				Airport::getInstance()->book_terminal();
			}

			if (Airport::getInstance()->is_booked_terminal()) {
				//std::cerr << "/ Refrescamos terminal /" << '\n';
				it++;
				(*it)->getRoute()->clear();
			}

			for (it = flights.begin(); it!=flights.end(); ++it)
			{
				if ((*it)->getRoute()->empty())
				{
					//sector 1
					if ((*it)->getPosition().get_y() <= 0 && abs((*it)->getPosition().get_y()) >= (*it)->getPosition().get_x())
					{
						if (Airport::getInstance()->is_booked_landing() &&
								Airport::getInstance()->is_booked_terminal()) {
							Airport::getInstance()->unbook_terminal();
							(*it)->getRoute()->push_back(ra1_0);
							(*it)->getRoute()->push_back(ra1_1);
							(*it)->getRoute()->push_back(ra1_2);
							(*it)->getRoute()->push_back(ra1_3);
							(*it)->getRoute()->push_back(ra1_4);

						} else if (Airport::getInstance()->is_booked_landing()) {
							(*it)->getRoute()->push_back(rc1_0);
							(*it)->getRoute()->push_back(rc1_1);
							(*it)->getRoute()->push_back(rc1_2);
							(*it)->getRoute()->push_back(rc1_3);
							(*it)->getRoute()->push_back(rc1_4);
							(*it)->getRoute()->push_back(rc1_5);
							(*it)->getRoute()->push_back(rc1_6);
							(*it)->getRoute()->push_back(rc1_7);
							(*it)->getRoute()->push_back(rc1_8);
							(*it)->getRoute()->push_back(rc1_9);
							(*it)->getRoute()->push_back(rc1_10);
							(*it)->getRoute()->push_back(rc1_11);
							(*it)->getRoute()->push_back(rc1_re);

						} else {
							Airport::getInstance()->book_landing();
							(*it)->getRoute()->push_back(ra1_0);
							(*it)->getRoute()->push_back(ra1_1);
							(*it)->getRoute()->push_back(ra1_2);
							(*it)->getRoute()->push_back(ra1_3);
							(*it)->getRoute()->push_back(ra1_4);
						}


					//sector 2
					} else if ((*it)->getPosition().get_y() <= 0 && abs((*it)->getPosition().get_y()) <= (*it)->getPosition().get_x())
					{
						if (Airport::getInstance()->is_booked_landing() &&
								Airport::getInstance()->is_booked_terminal()) {
							Airport::getInstance()->unbook_terminal();
							(*it)->getRoute()->push_back(ra2_0);
							(*it)->getRoute()->push_back(ra2_1);
							(*it)->getRoute()->push_back(ra2_2);
							(*it)->getRoute()->push_back(ra2_3);
							(*it)->getRoute()->push_back(ra2_4);

						} else if (Airport::getInstance()->is_booked_landing()  &&
							(*it)->getPosition().get_y() >= -4500) {
							(*it)->getRoute()->push_back(rc2_1);
							(*it)->getRoute()->push_back(rc2_2);
							(*it)->getRoute()->push_back(rc2_3);
							(*it)->getRoute()->push_back(rc2_4);
							(*it)->getRoute()->push_back(rc2_5);
							(*it)->getRoute()->push_back(rc2_6);
							(*it)->getRoute()->push_back(rc2_7);
							(*it)->getRoute()->push_back(rc2_8);
							(*it)->getRoute()->push_back(rc2_9);
							(*it)->getRoute()->push_back(rc2_10);
							(*it)->getRoute()->push_back(rc2_11);
							(*it)->getRoute()->push_back(rc2_re);

						} else if (Airport::getInstance()->is_booked_landing()) {
							(*it)->getRoute()->push_back(rc2_0);
							(*it)->getRoute()->push_back(rc2_1);
							(*it)->getRoute()->push_back(rc2_2);
							(*it)->getRoute()->push_back(rc2_3);
							(*it)->getRoute()->push_back(rc2_4);
							(*it)->getRoute()->push_back(rc2_5);
							(*it)->getRoute()->push_back(rc2_6);
							(*it)->getRoute()->push_back(rc2_7);
							(*it)->getRoute()->push_back(rc2_8);
							(*it)->getRoute()->push_back(rc2_9);
							(*it)->getRoute()->push_back(rc2_10);
							(*it)->getRoute()->push_back(rc2_11);
							(*it)->getRoute()->push_back(rc2_re);

						} else {
							Airport::getInstance()->book_landing();
							(*it)->getRoute()->push_back(ra2_0);
							(*it)->getRoute()->push_back(ra2_1);
							(*it)->getRoute()->push_back(ra2_2);
							(*it)->getRoute()->push_back(ra2_3);
							(*it)->getRoute()->push_back(ra2_4);
						}
						//Sector 3
					} else if ((*it)->getPosition().get_y() >= 0 && (*it)->getPosition().get_y() <= (*it)->getPosition().get_x())
					{
						if (Airport::getInstance()->is_booked_landing() &&
								Airport::getInstance()->is_booked_terminal()) {
							Airport::getInstance()->unbook_terminal();
							(*it)->getRoute()->push_back(ra3_0);
							(*it)->getRoute()->push_back(ra3_1);
							(*it)->getRoute()->push_back(ra3_2);
							(*it)->getRoute()->push_back(ra3_3);
							(*it)->getRoute()->push_back(ra3_4);

						} else if (Airport::getInstance()->is_booked_landing() &&
							(*it)->getPosition().get_y() <= 4500) {
							(*it)->getRoute()->push_back(rc3_1);
							(*it)->getRoute()->push_back(rc3_2);
							(*it)->getRoute()->push_back(rc3_3);
							(*it)->getRoute()->push_back(rc3_4);
							(*it)->getRoute()->push_back(rc3_5);
							(*it)->getRoute()->push_back(rc3_6);
							(*it)->getRoute()->push_back(rc3_7);
							(*it)->getRoute()->push_back(rc3_8);
							(*it)->getRoute()->push_back(rc3_9);
							(*it)->getRoute()->push_back(rc3_10);
							(*it)->getRoute()->push_back(rc3_11);
							(*it)->getRoute()->push_back(rc3_re);

						} else if (Airport::getInstance()->is_booked_landing()) {
							(*it)->getRoute()->push_back(rc3_0);
							(*it)->getRoute()->push_back(rc3_1);
							(*it)->getRoute()->push_back(rc3_2);
							(*it)->getRoute()->push_back(rc3_3);
							(*it)->getRoute()->push_back(rc3_4);
							(*it)->getRoute()->push_back(rc3_5);
							(*it)->getRoute()->push_back(rc3_6);
							(*it)->getRoute()->push_back(rc3_7);
							(*it)->getRoute()->push_back(rc3_8);
							(*it)->getRoute()->push_back(rc3_9);
							(*it)->getRoute()->push_back(rc3_10);
							(*it)->getRoute()->push_back(rc3_11);
							(*it)->getRoute()->push_back(rc3_re);

						} else {
							Airport::getInstance()->book_landing();
							(*it)->getRoute()->push_back(ra3_0);
							(*it)->getRoute()->push_back(ra3_1);
							(*it)->getRoute()->push_back(ra3_2);
							(*it)->getRoute()->push_back(ra3_3);
							(*it)->getRoute()->push_back(ra3_4);
						}
					} else if ((*it)->getPosition().get_y() >= 0 && (*it)->getPosition().get_y() >= (*it)->getPosition().get_x())
					{

						if (Airport::getInstance()->is_booked_landing() &&
								Airport::getInstance()->is_booked_terminal()) {
							Airport::getInstance()->unbook_terminal();
							(*it)->getRoute()->push_back(ra4_0);
							(*it)->getRoute()->push_back(ra4_1);
							(*it)->getRoute()->push_back(ra4_2);
							(*it)->getRoute()->push_back(ra4_3);
							(*it)->getRoute()->push_back(ra4_4);

						} else if (Airport::getInstance()->is_booked_landing()) {
							(*it)->getRoute()->push_back(rc4_0);
							(*it)->getRoute()->push_back(rc4_1);
							(*it)->getRoute()->push_back(rc4_2);
							(*it)->getRoute()->push_back(rc4_3);
							(*it)->getRoute()->push_back(rc4_4);
							(*it)->getRoute()->push_back(rc4_5);
							(*it)->getRoute()->push_back(rc4_6);
							(*it)->getRoute()->push_back(rc4_7);
							(*it)->getRoute()->push_back(rc4_8);
							(*it)->getRoute()->push_back(rc4_9);
							(*it)->getRoute()->push_back(rc4_10);
							(*it)->getRoute()->push_back(rc4_11);
							(*it)->getRoute()->push_back(rc4_re);

						} else {
							Airport::getInstance()->book_landing();
							(*it)->getRoute()->push_back(ra4_0);
							(*it)->getRoute()->push_back(ra4_1);
							(*it)->getRoute()->push_back(ra4_2);
							(*it)->getRoute()->push_back(ra4_3);
							(*it)->getRoute()->push_back(ra4_4);
						}
					}
				}
			}
}

}  // namespace atcsim
