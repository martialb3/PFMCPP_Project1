#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase




//  1)
//  Noun:       leg                     // 1)
//  action 1:   the leg bends           // 2)
leg.bend();                             // 3)
//  action 2:   the leg shakes          // 2)
leg.shake();                            // 3)
//  action 3:   the leg kicks upward    // 2)
leg.kickUpward();                       // 4) demonstrates CamelCase 


//  2)
//  Noun:       tornado                     // 1)
//  action 1:   the tornado swirls          // 2)
tornado.swirl();                            // 3)
//  action 2:   the tornado touches down    // 2)        
tornado.touchDown();                        // 4) demonstrates CamelCase 
//  action 3:   the tornado moves East      // 2)
tornado.moveEast();                         // 4) demonstrates CamelCase 


//  3)
//  Noun:       bird
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird chirps
bird.chirp();
//  action 3:   the bird builds nest
bird.buildNest();


//  4)
//  Noun:       detective
//  action 1:   the detective investigates
detective.investigate();
//  action 2:   the detective takes notes
detective.takeNotes();
//  action 3:   the detective report findings
detective.reportFindings();


//  5)          
//  Noun:       movie
//  action 1:   the movie entertains
movie.entertain();
//  action 2:   the movie tells stories
movie.tellStory();
//  action 3:   the movie informs the public
movie.informPublic();


//  6)
//  Noun:       watch
//  action 1:   the watch clicks
watch.click();
//  action 2:   the watch displays time
watch.displayTime();
//  action 3:   the watch measures time
watch.measureTime();


//  7)
//  Noun:       finger
//  action 1:   the finger moves
finger.move();
//  action 2:   the finger points outward
finger.pointOutward();
//  action 3:   the finger scratches my face
finger.scratchFace();


//  8)  
//  Noun:       boat
//  action 1:   the boat floats
boat.float();
//  action 2:   the boat carries merchandise
boat.carryMerchandise();
//  action 3:   the boat turns right
boat.turnRight():


//  9)
//  Noun:       musician
//  action 1:   the musician plays
musician.play();
//  action 2:   the musician takes requests
musician.takeRequest():
//  action 3:   the musician leaves the stage
musician.leaveStage();


//  10)
//  Noun:       wind
//  action 1:   the wind blows
wind.blow();
//  action 2:   the wind stops
wind.stop();
//  action 3:   the wind blows up skirts
wind.blowSkirt();
 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
