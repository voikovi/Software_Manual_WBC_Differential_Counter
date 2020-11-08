#This python script fixes the problem for printing from Last_results.txt and when exporting to
#.pdf file as shown in the video for printing in bulgarian language it adds 4 new empty lines 
#after line 70 this way the results are not cut between pages but change default font from notepad
#to size 8 from the default size 11 before exporting to .pdf for printing and use Last_results_fixed.txt
#instead of Last_results.txt

import os

filename = 'Last_results.txt'
filename_2 = 'Last_results_fixed.txt' 
count_line = 0
current_path = os.getcwd()

if os.path.exists(current_path + '\Last_results_fixed.txt'):
    os.remove(current_path + '\Last_results_fixed.txt')

with open(filename) as file_object:
    lines = file_object.readlines()
    for line in lines:
        if (int(count_line) != 0) and (int(count_line) % 70 == 0):
            with open(filename_2, 'a') as file_object_2:
                file_object_2.write('\n\n\n\n')
                file_object_2.write(line)
        else:
            with open(filename_2, 'a') as file_object_2:
                file_object_2.write(line)
        count_line += 1