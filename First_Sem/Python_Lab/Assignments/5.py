def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 50
    elif item == "coffee":
        return 20
    elif item == "tea":
        return 10
    elif item == "golibaje":
        return 40
    else:
        return 0


def item_cost(item, qty):
    cost=get_price(item)*qty
    return cost


def calculate_gst(amount, rate=0.05):
    gst=amount * rate
    return round(gst)


def generate_bill(subtotal, discount_percent=0):
    discount = discount_percent*subtotal/100
    amount_after_discount = subtotal-discount
    gst = calculate_gst(subtotal)
    total = amount_after_discount+gst
    return discount, gst, total


def split_bill(total, people):
    each_pays = round(total/people)
    left_over = total%people
    return each_pays,left_over


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.
subtotal = item_cost('dosa',2) + item_cost('coffee',3) # TODO: call item_cost() for dosa and coffee and add them
discount, gst, total=generate_bill(subtotal,10)
each, extra = split_bill(total,3)

print("Subtotal :", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :", total)
print("Each pays:", each, "| Left over:", extra)


# people=3, each_pays=22.6
# print(22.6//3) # 7.0
# print(3*7.0) # 21.0