#include <iostream>
#include "ecs36b_Exception.h"
#include "GPS.h"

using namespace std;

int main(){

  GPS_DD gps_Home_Woodland{ 38.672215864622636, -121.72280111121437 };
  GPS_DD gps_TLC_UCDavis{ 38.53874868013882,  -121.7542091083306 };
  GPS_DD gps_IKEA_Sacramento{ 38.58681641563053, -121.55296296578501};

	cout<<gps_Home_Woodland.distance(gps_TLC_UCDavis);

	return 0;

}

