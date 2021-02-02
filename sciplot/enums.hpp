// sciplot - a modern C++ scientific plotting library powered by gnuplot
// https://github.com/sciplot/sciplot
//
// Licensed under the MIT License <http://opensource.org/licenses/MIT>.
//
// Copyright (c) 2018-2021 Allan Leal
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

// C++ includes
#include <string>

namespace sciplot {

/// All gnuplot style options for plotting data
enum class plotstyle
{
    lines,
    points,
    linespoints,
    impulses,
    dots,
    steps,
    fsteps,
    histeps,
    errorbars,
    labels,
    xerrorbars,
    yerrorbars,
    xyerrorbars,
    errorlines,
    xerrorlines,
    yerrorlines,
    xyerrorlines,
    boxes,
    histograms,
    filledcurves,
    boxerrorbars,
    boxxyerrorbars,
    financebars,
    candlesticks,
    vectors,
    image,
    rgbimage,
    pm3d,
};


/// Multiplot layout grow direction
enum class growdirectiontype
{
    downwards,
    upwards
};

/// Multiplot layout fill order
enum class fillordertype
{
    rowsfirst,
    columnsfirst
};

/// All extension formats supported by sciplot when saving a plot to a file.
enum class ext
{
    emf,
    png,
    svg,
    pdf,
    eps
};

namespace gnuplot
{

/// Return a string for a given enum value of type `with`
inline auto plotstylestr(plotstyle value) -> std::string
{
    switch (value)
    {
        case plotstyle::lines: return "lines";
        case plotstyle::points: return "points";
        case plotstyle::linespoints: return "linespoints";
        case plotstyle::impulses: return "impulses";
        case plotstyle::dots: return "dots";
        case plotstyle::steps: return "steps";
        case plotstyle::fsteps: return "fsteps";
        case plotstyle::histeps: return "histeps";
        case plotstyle::errorbars: return "errorbars";
        case plotstyle::labels: return "labels";
        case plotstyle::xerrorbars: return "xerrorbars";
        case plotstyle::yerrorbars: return "yerrorbars";
        case plotstyle::xyerrorbars: return "xyerrorbars";
        case plotstyle::errorlines: return "errorlines";
        case plotstyle::xerrorlines: return "xerrorlines";
        case plotstyle::yerrorlines: return "yerrorlines";
        case plotstyle::xyerrorlines: return "xyerrorlines";
        case plotstyle::boxes: return "boxes";
        case plotstyle::histograms: return "histograms";
        case plotstyle::filledcurves: return "filledcurves";
        case plotstyle::boxerrorbars: return "boxerrorbars";
        case plotstyle::boxxyerrorbars: return "boxxyerrorbars";
        case plotstyle::financebars: return "financebars";
        case plotstyle::candlesticks: return "candlesticks";
        case plotstyle::vectors: return "vectors";
        case plotstyle::image: return "image";
        case plotstyle::rgbimage: return "rgbimage";
        case plotstyle::pm3d: return "pm3d";
        default: return "lines";
    }
}

/// Return a string for a given enum value of type `fillorder`
inline auto fillordertypestr(fillordertype value) -> std::string
{
    switch (value)
    {
        case fillordertype::rowsfirst: return "rowsfirst";
        case fillordertype::columnsfirst: return "columnsfirst";
        default: return "rowsfirst";
    }
}

/// Return a string for a given enum value of type `growdirection`
inline auto growdirectiontypestr(growdirectiontype value) -> std::string
{
    switch (value)
    {
        case growdirectiontype::downwards: return "downwards";
        case growdirectiontype::upwards: return "upwards";
        default: return "downwards";
    }
}

} // namespace gnuplot
} // namespace sciplot
