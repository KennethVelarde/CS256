//
//  main.cpp
//  challenge
//
//  Created by Kenneth-Matthew Velarde on 4/10/19.
//  Copyright © 2019 Kenneth-Matthew Velarde. All rights reserved.
//

#include <iostream>

int main(){
    int count = 0;
    double total = 0.0;
    std::string user = "";
    bool done = false;
    
    while(!done){
        std::cout<<"enter a test score, or a 0 to end: " << "\n";
        std::cin>> user;
        double score = std::stod(user); // convert user input(string) to double
        
        if(score == 0){
        done = true;
        }
        else if(!done){
            total += score;
            count++;
            
        }//end if
    }// end while
    
    std::cout<< "Total scores read: " << count << std::endl;
    
    std::cout<< "Average: " << (total / count) << std::endl;
    
    return 0;
}
