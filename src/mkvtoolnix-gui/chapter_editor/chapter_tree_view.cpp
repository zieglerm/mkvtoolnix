#include "common/common_pch.h"

#include <QDragMoveEvent>

#include "mkvtoolnix-gui/chapter_editor/chapter_tree_view.h"
#include "mkvtoolnix-gui/chapter_editor/tool.h"

namespace mtx { namespace gui { namespace ChapterEditor {

using namespace mtx::gui;

ChapterTreeView::ChapterTreeView(QWidget *parent)
  : QTreeView{parent}
{
}

ChapterTreeView::~ChapterTreeView() {
}

void
ChapterTreeView::dragMoveEvent(QDragMoveEvent *event) {
  if (event->pos().x() > columnWidth(0)) {
    event->ignore();
    return;
 }

  QTreeView::dragMoveEvent(event);
}

}}}