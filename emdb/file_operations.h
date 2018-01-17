/* 
 * File:   
 * Author: 
 *
 * Fill Header!!
 */

#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include "common.h"
#include "database.h"

//Add defines here!!

int read_config(Database *db);

int write_config(Database *db);

int store_email(Email* email);

#endif /* FILE_OPERATIONS_H */

