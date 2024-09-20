package tree_sitter_DBC_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-DBC"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_DBC.Language())
	if language == nil {
		t.Errorf("Error loading Dbc grammar")
	}
}
