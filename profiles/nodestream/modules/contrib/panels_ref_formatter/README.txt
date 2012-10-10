# Introduction

The panels reference formatter module renders entries from a reference field with a mini panel.
This is useful since panels is panels is incredibly powerful when it comes to controlling output
in various ways.

# Support

Panels reference formatter currently supports [Entity reference](http://drupal.org/project/entityreference) and [References](http://drupal.org/project/references).
Post a feature request in the issue queue if you are interested in getting support for more field types.

# Usage

1. Create a mini panel and add a Required context that matches the entity you want to display (for instance a node context).
2. Create your reference field.
3. Select the "Mini panel" option as your formatter, and select your newly created mini panel as the mini panel to use for rendering.

Note that only panels with an appropriate context shows up in the select list, so make sure you do step 1 correctly.
