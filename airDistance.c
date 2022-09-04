/**
 * Aayush kulkarni
 * akulkarni3@huskers.unl.edu
 * Date: 2022/09/04
 *
 * A C program to find The distance between these two locations
 *
 */

#include<stdio.h>
#include<math.h>


    int main(){  //main method

        double Orlongitude,Orlatitude,dlongitude,dlatitude,distance = 0.0;
        printf("Enter Latitude of origin: \n");
        scanf("%lf: ",&Orlatitude);//asking the user the latitude {of orgin}

        printf("Enter Longitude of origin: \n");
        scanf("%lf: ",&Orlongitude);//asking the user the longitudes {of orgin}

        printf("Enter Latitude of Destination: \n");
        scanf("%lf: ",&dlatitude);//asking the user the latitude {of destination}

        printf("Enter Longitude of Destination: \n");
        scanf("%lf: ",&dlongitude);//asking the user the longitudes {of destination}

    //defining the value of pi
        double pi = 3.1415926;
    //defining the value of earth's radius
        double earth = 6371.0;
    //writing the formula using library functions of math.h
        distance = acos(sin(Orlatitude*pi/180.0)*sin(dlatitude*pi/180.0)+cos(Orlatitude*pi/180.0)*
        cos(dlatitude*pi/180.0)*cos((dlongitude - Orlongitude)*pi/180.0))*earth; //converting the degrees to radians

    //printing the output: Location Distance containing [Origin, Destination and Air distance]
        printf("\nLocation Distance: \n===============================\n");
        printf("Origin: (%lf,%lf)\n",Orlatitude,Orlongitude);
        printf("Destination: (%lf,%lf)\n",dlatitude,dlongitude);
        printf("Air Distance is %lf kms\n",distance);

        return 0;
}

