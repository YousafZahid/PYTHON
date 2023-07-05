def questions(question_number):
   print(question_number)
   with open("questions.txt", "r") as f:
      q = f.readlines()
   line = q[question_number -1].strip()
   print(line)
   f.close()
   answer = input("Answer : ")
   with open("key.txt", "r") as f:
      q = f.readlines()
   line = q[question_number -1].strip()
   if line == answer:
      print("CORRECT ANSWER")
   else:
      print("WRONG ANSWER")
   f.close()
   
   
   
   
   
   
import random
generate_number = random.randint(1,3)
questions(generate_number)