# -*- coding: utf-8 -*-
"""
Created on Sun Dec  1 22:03:07 2019

@author: songz
"""


TIMES = 100000000
my_first_choice_n=0
my_change_choice_n=0
for i in range(TIMES):
	car_inDoor=randint(0,2)
	my_guess=randint(0,2)
	if car_inDoor==my_guess:
		my_first_choice_n+=1
	else:
		my_change_choice_n+=1
print("不改选择获得汽车:{}".format(my_first_choice_n/TIMES))
print("更改选择获得汽车:{}".format(my_change_choice_n/TIMES))
