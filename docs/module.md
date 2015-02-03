## import

### import is a statement or a expression?

## `gf_iter` and `gf_match` are in `voba_module` or `voba_builtin`

`for` statement and `match` statement need the two generic
functions. How to pass them to a compiled voba module?

Now, `voba_module` defines a special internal modules, named `VOBA_MODULE_LANG_ID`.

They are in `voba_module`, now.
- prons:
  - `builtin` module itself is a normal module.
- cons
  - `voba_module` is less readable, too many hidden tricks.

## virtual function table in generic function or class table?

it should be in `voba_cls_t` object.

