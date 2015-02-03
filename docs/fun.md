## function value

~~~{.el}
(lambda (<args>) <exprs>)
~~~

- positional argument

~~~{.el}
(lambda (a b c) ...)
~~~

- optional argument

~~~{.el}
(lambda (a b (c)) ...)
~~~

`c` is optional, if it is not given, the default value is `undef`.

~~~{.el}
(lambda (a b (c 1)) ...)
~~~

`c` is optional value, default value is 1.

~~~{.el}
(lambda (a b (c <expr-of-default-value>)) ...)
~~~

`<expr-of-default-value>` is evaluated in the context of the function
itself, not the context where it is defined.

TODO: add an example, it would be a little bit complex.

- keyword argument

~~~{.el}
(lambda (a b (c :c <expr-of-default-value>)) ...)
~~~


