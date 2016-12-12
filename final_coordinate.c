/*
 * Rishi Dutta 912790628
 * coordinate.c
 * Coordinate based functions
 * Creates Coordinate structures, checks if they are valid,
 * and swaps some coordinates.
 */
#include "coordinate.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * Input:
 *      int x, an x-coordinate
 *      int y, a y-coordinate
 * Output:
 *      A Coordinate
 * Summary:
 *      Initializes a Coordinate to (x,y)
 */
Coordinate ConstructCoordinate(int x, int y) {
    Coordinate result;
    result.x = x;
    result.y = y;
    return result;
}

/*
 * Input:
 *      Coordinate C1, a coordinate
 *      Coordinate C2, another coordinate
 * Output:
 *      true if C2 is a neighbor of C1, false otherwise
 * Summary:
 *      Checks if C1 and C2 are neighbors, that is, if they
 *      are in adjacent squares (including squares that are
 *      diagonally adjacent) and not equal
 */

int IsNeighbor(Coordinate C1, Coordinate C2) {
    if (((fabs(C1.x-C2.x)>1) || (fabs(C1.y-C2.y)>1)) || ((C1.x == C2.x) && (C1.y == C2.y))){
        return 0;
    }
    else {
        return 1;
    }
}

/*
 * Input:
 *      Coordinate* C, a pointer to a Coordinate
 * Summary:
 *      Swaps the entries of the Coordinate pointed to by C
 */
void SwapCoordinates(Coordinate* C) {
    int temp = C->x;
    C->x = C->y;
    C->y = temp;
    return;
}
