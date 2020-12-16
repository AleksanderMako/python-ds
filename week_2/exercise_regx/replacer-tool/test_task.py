
import task


def test_findReplace ():
    obj = task.CmdApp()
    test = 'this is a test here random should be replaced by done, all instances of random'
    expect ='this is a test here done should be replaced by done, all instances of done'

    replaced_str = obj.findReplace(test,'random','done')
    result = expect  == replaced_str

    if result:
        print("Success")
    else: print('failed')
    print(replaced_str)


def testFileWriter():
    obj = task.CmdApp()
    test = 'Write this data pls'
    obj.writeToFile("demo",test)

test_findReplace()
testFileWriter()