// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>


/**
 * Integer data types code
 *  @return Exiit status
*/

int main()
{
    const int SecondsPerSecond{ 60 };
    int TotalSeconodsPlayed{ 100 };

    // caculate minutes and seconds played
    int MinutesPlayed = TotalSeconodsPlayed / SecondsPerSecond;;
    int SecondsPlayed = TotalSeconodsPlayed % SecondsPerSecond;


    // print results
    std::cout << "Minutes Played: " << MinutesPlayed << "\n";
    std::cout << "Seconds Played: " << SecondsPlayed << "\n";

}

