# Basic Question

### "1" + 1 + 1 = ? in JavaScript

"111" in JavaScript

### JavaScript Selector Methed:

- document.querySelectorAll(".example"); // return NodeList and dot(.) for class and # for id selector
- document.querySelector("p");
- document.getElementById("demo");
- document.getElementsByClassName("demo");
- document.getElementsByTagName("demo");
- document.getElementsByName("demo");

### Input field er value k onno element a show korano

![alt](./img/inputToShowPTage.png)

### JQuery To popup making:

![alt](./img/popup..png)

- Button Text Changing with JQuery depends on the value of box visibility but need to add a class on button btn:

```javascript
$(".btn").text($(".box").is(":visible") ? "Hide" : "Show");
```

### OOP Main Properties:

These four properties are the main properties of OOP. They are:

- Polymorphism
- Encapsulation
- Abstraction
- Inheritance.

### img Syntax in HTML

```HTML
<img src="url_of_image" alt="alternative_text" />
```

### Depth first traversal:

(a) Inorder (Left, Root, Right) : 4 2 5 1 3
(b) Preorder (Root, Left, Right) : 1 2 4 5 3
(c) Postorder (Left, Right, Root) : 4 5 2 3 1

### BitWise Operator IN CPP:

Example :
a = 00000101 (5 in decimal)
b = 00001001 (9 in decimal)

- & (bitwise AND) -> a & b = 00000001 (1 in decimal)
- | (bitwise OR) -> a | b = 00001101 (13 in decimal)
- ^ (bitwise XOR) -> a ^ b = 00001100 (12 in decimal)
- << (left shift) -> a << 1 = 00001010 (10 in decimal)
- &gt;&gt; (right shift) -> a >> 1 = 00000010 (2 in decimal)
- ~ (bitwise NOT) -> ~a = 11111010 (-6 in decimal)

### Having Clauses in SQL:

```SQL
SELECT column_name(s)
FROM table_name
WHERE condition
GROUP BY column_name(s)
HAVING condition
ORDER BY column_name(s);
```

```SQL
SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country
HAVING COUNT(CustomerID) > 5;
```

### GROUP By Clause in SQL:

```SQL
SELECT column_name(s)
FROM table_name
WHERE condition
GROUP BY column_name(s)
ORDER BY column_name(s);
```

```SQL
SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country;
```

### SQL WHERE Clause:

```SQL
SELECT column1, column2, ...
FROM table_name
WHERE condition;
```

```SQL
SELECT * FROM Customers
WHERE Country='Mexico';
```

### JS er code kivabe run hoye thake?

JavaScript is an interpreted language. This means we do not have to compile the JavaScript source code before sending it to the browser. An interpreter can take the raw JavaScript code and run it for you.
<strong>V8</strong> is one of the most popular JavaScript engines, perhaps because it is developed by Google. But the V8 engine is constantly evolving and becoming faster. Apart from Google Chrome, Chromium project, Electron.js, and server-side JavaScript runtime Node.js use the V8 engine.

### Basic JQuery:

```javascript
$(document).ready(function () {
  // jQuery methods go here...
});
```

```javascript
$(this).hide() - hides the current element.

$("p").hide() - hides all <p> elements.

$(".test").hide() - hides all elements with class="test".

$("#test").hide() - hides the element with id="test".
```

### function in jQuery:

```javascript
function myFunc() {
  $(".box").toggle();
}
```

### JQuery Selector:

| Syntax                   | Description                                                                   |
| ------------------------ | ----------------------------------------------------------------------------- |
| $("p")                   | Selects all <p> elements                                                      |
| $("p.intro")             | Selects all <p> elements with class="intro"                                   |
| $("p:first")             | Selects the first <p> element                                                 |
| $("ul li:first")         | Selects the first <li> element of the first <ul>                              |
| $("ul li:first-child")   | Selects the first <li> element of every <ul>                                  |
| $("[href]")              | Selects all elements with an href attribute                                   |
| $("a[target='_blank']")  | Selects all <a> elements with a target attribute value equal to "\_blank"     |
| $("a[target!='_blank']") | Selects all <a> elements with a target attribute value NOT equal to "\_blank" |
| $(":button")             | Selects all `<button>` elements and `<input>` elements of type="button"       |
| $("tr:even")             | Selects all even <tr> elements                                                |
| $("tr:odd")              | Selects all odd <tr> elements                                                 |

### JQuery Event:

| Mouse Event  | Keyboard Event | Form Event | Document/Window Event |
| ------------ | -------------- | ---------- | --------------------- |
| click()      | keypress()     | submit()   | load()                |
| dblclick()   | keydown()      | change()   | resize()              |
| mouseenter() | keyup()        | focus()    | scroll()              |
| mouseleave() |                | blur()     | unload()              |

### jQuery hide() and show():

```javascript
$("#hide").click(function () {
  $("p").hide();
});

$("#show").click(function () {
  $("p").show();
});

$("button").click(function () {
  $("p").toggle();
});
```

Syntax:

```javascript
$(selector).hide(speed, callback);

$(selector).show(speed, callback);
```

Speed : "slow", "fast", or milliseconds.
example:

```javascript
$("button").click(function () {
  $("p").hide(1000);
});

$("button").click(function () {
  $("p").hide(slow);
});
```

### jQuery Fading Methods

- fadeIn()
- fadeOut()
- fadeToggle()
- fadeTo()

```javascript
$("button").click(function () {
  $("#div1").fadeIn();
  $("#div2").fadeIn("slow");
  $("#div3").fadeIn(3000);
});
```

### jQuery Sliding Methods

```javascript
$("#flip").click(function () {
  $("#panel").slideDown("slow");
});

$("#flip").click(function () {
  $("#panel").slideUp();
});
```

### jQuery Animate Method

```javascript
$("button").click(function () {
  $("div").animate({
    left: "250px",
    opacity: "0.5",
    height: "150px",
    width: "150px",
  });
});
```

### Note:

By default, all HTML elements have a static position, and cannot be moved.
To manipulate the position, remember to first set the CSS position property of the element to relative, fixed, or absolute!
Example:

```HTML
<div style="background:#98bf21;height:100px;width:100px;position:absolute;"></div>
```

### Is it possible to manipulate ALL CSS properties with the animate() method?

Yes, almost! However, there is one important thing to remember: all property names must be camel-cased when used with the animate() method: You will need to write paddingLeft instead of padding-left, marginRight instead of margin-right, and so on.

Also, color animation is not included in the core jQuery library.
If you want to animate color, you need to download the Color Animations plugin from jQuery.com.

### In Decimal negative binary conversion:

Result = -6
(6)dec = (0110)binary
1's compliment = ~(00000110)binary = 11111001
2's compliment = 11111001 + 1 = (11111010)binary = -6

### javascript Map

```javascript
let x = [1, 2, 3, 4, 5];
x.map((item) => {
  return item * 2;
});
```
