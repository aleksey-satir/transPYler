bin_op=f"{left} {sign} {right}"
bool_op=f"{first_el} {(lambda other_el, op:space.join([op+space+el for el in other_el]))(other_el, op)}"
comp=f"{first_el} {(lambda els, ops:space.join([ops[i]+space+els[i] for i in range(len(ops))]))(other_el, ops)}"
attr=f"{_class}.{attr_name}"
