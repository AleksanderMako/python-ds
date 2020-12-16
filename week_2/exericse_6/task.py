import csv
class Task:
  


    def fileReader(self):
        with open('phone_book.csv',newline='') as csvfile:
            reader = csv.DictReader(csvfile)
            self.male_forenames = {row['FORENAME'] for row in reader if row['TITLE'] == 'Mr'}
            print(self.male_forenames)

        with open('phone_book.csv',newline='') as csvfile:
            reader = csv.DictReader(csvfile)
            self.female_forenames = {row['FORENAME'] for row in reader if row['TITLE'] == 'Mrs' or row['TITLE']=='Miss'or row['TITLE']=='Ms'}
            print(self.female_forenames)

        print('*******************************************************************************')
        with open('phone_book.csv',newline='') as csvfile:
            reader = csv.DictReader(csvfile)
            self.lol = [row for row in reader if len(row['FORENAME']) > 8 and len(row['SURNAME'])>8]
            print(self.lol)
        print('*******************************************************************************')
        with open('phone_book.csv',newline='') as csvfile:
            reader = csv.DictReader(csvfile)
            self.lol = sorted([(row['FORENAME'],row['SURNAME'],row['TITLE']) for row in reader],key =lambda tpl: tpl[1])
            print(self.lol)



t =Task()
t.fileReader()