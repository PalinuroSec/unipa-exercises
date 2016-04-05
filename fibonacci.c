/*
 * 
 * Copyright 2016 Lorenzo "Palinuro" Faletra  <palinuro@frozenbox.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>

long fibonacci(long);

int main()
{
  int n;
  printf("digita un numero: ");
  scanf("d", &n);
  printf("il numero di fibonacci in posizione %d e' %ld\n", n fibonacci(n));

  return 0;
}

long int fibonacci(long int pos)
{
  if(i==0)
    return 0;
  else if(i==1)
    return 1;
  else
    return fibonacci(i-1) + fibonacci(i-2);
}
