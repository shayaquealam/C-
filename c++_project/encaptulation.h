/*
 * encaptulation.h
 *
 *  Created on: 09-Oct-2022
 *      Author: alam
 */

#ifndef ENCAPTULATION_H_
#define ENCAPTULATION_H_

class Encapsulation
{
    private:
        // data hidden from outside world
        int x;

    public:
        // function to set value of
        // variable x
        void set(int a);

        // function to return value of
        // variable x
        int get();
};

#endif /* ENCAPTULATION_H_ */
