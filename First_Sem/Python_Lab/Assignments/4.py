# Write a Python program to process the given Python string below to clean and
# transform the data into a valid format.
# raw_data = """ naveen KUMAR
# naveen.kumar@COMPANY.com
# +91-98765-43210
# """
# Output format:
# Name : Naveen Kumar
# Initials : NK
# Email : naveen.kumar@company.com
# Domain : company.com
# Phone : *********3210
# Valid : True

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

raw_data = """ naveen KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name_raw,email,phone=raw_data.split("\n")[0],raw_data.split("\n")[1],raw_data.split("\n")[2] 
name=name_raw.strip().title().split()
initials=name[0].upper()[0:1]+name[1].upper()[0:1] #initials done
name=name[0]+" "+name[1] #name done
email=email.lower() #email done
domain=email.split("@")[1] #domain done
phone=phone.replace("-","").removeprefix("+91")
print(f'''
Name : {name}
Initials : {initials}
Email : {email}
Domain : {domain}
Phone : *********{phone[-4:]}
Valid : True
''')