#INCOMPLETE

# #Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
name2=name.strip().title()
print(name2)
name2=name2.split()
print(name2)
name2=name2[0]+" "+name2[1]
print(name2)
print(email)
print(phone.replace("-",""))

first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()