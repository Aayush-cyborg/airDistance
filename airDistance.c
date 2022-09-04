#include<stdio.h>
#include<math.h>

//main method
int main(){
    double Olongitude,Olatitude,longitude,latitude,distance = 0.0;
    //asking the user the latitude {of orgin}
    printf("Enter Latitude of origin in degrees: \n");
    scanf("%lf: ",&Olatitude);
    //asking the user the longitudes {of orgin}
    printf("Enter Longitude of origin in degrees: \n");
    scanf("%lf: ",&Olongitude);
    //asking the user the latitude {of destination}
    printf("Enter Latitude of Destination in degrees: \n");
    scanf("%lf: ",&latitude);
    //asking the user the longitudes {of destination}
    printf("Enter Longitude of Destination in degrees: \n");
    scanf("%lf: ",&longitude);

    //defining the value of pi
    double pi = 3.1415926;
    //defining the value of earth's radius
    double earth = 6371.0;
    //writing the formula using library functions of math.h
    distance = acos(sin(Olatitude*pi/180.0)*sin(latitude*pi/180.0)+cos(Olatitude*pi/180.0)*
    cos(latitude*pi/180.0)*cos((longitude - Olongitude)*pi/180.0))*earth; //converting the degrees to radians

    //printing the output: Location Distance containing [Origin, Destination and Air distance]
    printf("\nLocation Distance: \n===============================\n");
    printf("Origin: (%lf,%lf)\n",Olatitude,Olongitude);
    printf("Destination: (%lf,%lf)\n",latitude,longitude);
    printf("Air Distance is %lf kms\n",distance);

    return 0;
}

