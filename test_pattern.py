import subprocess
import sys

def get_output(pattern, rows):
    p = subprocess.Popen("./patterns", stdout=subprocess.PIPE, stdin=subprocess.PIPE)
    op,_ = p.communicate(f"{pattern}\n{rows}\n".encode("ascii"))
    op = op.decode("ascii").replace("Enter type of pattern (1 or 2) Number of rows", "")
    return op

def test():
    expected = """####
###
##
#
"""
    obtained = get_output(1, 4)
    assert expected == obtained, f"Pattern 1, 4 rows\nExpected\n{expected} Got\n{obtained}"

    expected = """   #
  ##
 ###
####
"""
    obtained = get_output(2, 4)
    assert expected == obtained, f"Pattern 2, 4 rows\nExpected\n{expected} Got\n{obtained}"

    expected = """#####
####
###
##
#
"""
    obtained = get_output(1, 5)
    assert expected == obtained, f"Pattern 1, 5 rows\nExpected\n{expected} Got\n{obtained}"

    expected = """    #
   ##
  ###
 ####
#####
"""
    obtained = get_output(2, 5)
    assert expected == obtained, f"Pattern 2, 5 rows\nExpected\n{expected} Got\n{obtained}"


    return True

if __name__ == "__main__":
    if test():
        print ("All good")
        sys.exit(0)
    







